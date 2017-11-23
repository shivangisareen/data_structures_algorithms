//reading a file using CSV parser and sorting the 'score' column using quick sort


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 20000


//title
//platform
//score
//release_year

struct ign {
    char title[MAX_BUFFER];
    char platform[MAX_BUFFER];
    int score;
    int release_year;
};



struct ign reviews[MAX_BUFFER];
struct ign field;

int left,right;
int count=0;




int partition(struct ign *a, int low, int high)
{
    int pivot = a[low].score;
    int i = low-1;
    int j = high + 1;
    struct ign t;
    while(1)
    {
        do {
            i++;
           
        } while (a[i].score < pivot);
        
        do {
            j--;
           
        } while (a[j].score > pivot);
        
        if(i >= j)
            return j;
        
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        
    }
}

// Quicksort routine
void quickSort(struct ign *a, int low, int high)
{
    // base condition
    if(low >= high)
        return;
    
    // rearrange the elements across pivot
    int pivot = partition(a, low, high);
    
    // recurse on sub-array containing elements that are less than pivot
    quickSort(a, low, pivot);
    
    // recurse on sub-array containing elements that are more than pivot
    quickSort(a, pivot + 1, high);
}


int next_field (FILE *f, char *buf, int max) {
    int i=0, quoted=0, end=0;
    
    for(;;) {
        buf[i]=fgetc(f);
        
        if(buf[i]=='"') { quoted=!quoted; }
        
        if(buf[i]==',' && quoted==0 ) { break; }
        
        if(buf[i]=='\n') { count++; break;}
        
        if(feof(f))  { end=1; break;}
        
        if(i<max-1) { i++; }
    }
    buf[i]=0;
    return end;
}



void fetch_record (FILE *csv, struct ign *field) {
    
    char buf[18624];
    
    next_field(csv, field->title, MAX_BUFFER);
    
    next_field(csv, field->platform, MAX_BUFFER);
    
    next_field(csv, buf, MAX_BUFFER);
    field->score=atoi(buf);
    
    next_field(csv, buf, MAX_BUFFER);
    field->release_year=atoi(buf);
}


void print_records (struct ign *field) {
    
    printf("%s | %s | %d | %d \n",field->title,field->platform, field->score, field->release_year);
    
}

int main() {
    
    FILE *f= fopen("ign.csv","r");
    
    
    int i=0;
    //int j=18624;
    
    if(!f) {
        printf("UNABLE TO OPEN FILE  \n");
    }
    
    fetch_record(f, &field);
    
    while(!feof(f)) {
        fetch_record(f, &field);
        reviews[i]=field;
        print_records(&field);
        printf("\n\n");
        i++;
    }
    //i=18625
    i--;  //i=18624
    printf("Total records read= %d\n\n\n",count);
    
    quickSort(reviews, 0, 18624);
    int c=0;
    
    printf("Top Ten Games of the Last Twenty Years:\n\n");
    
    while(c<10) {
        printf("Title: %s\n",reviews[i].title);
        printf("Platform: %s\n",reviews[i].platform);
        printf("Score: %d\n",reviews[i].score);
        printf("Release Year: %d\n",reviews[i].release_year);
        printf("\n");
        c++;
        i--;
    }
    
    
    
    fclose(f);
}


