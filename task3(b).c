//
//  task3(b).c
//  assignment2
//
//  Created by Shivangi Sareen on 13/11/17.
//  Copyright © 2017 Shivangi Sareen. All rights reserved.
//

/*
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



void get_year (int year) {
    int c=0;

    for(int i=18624;i>=0; i--) {
        if(reviews[i].release_year==year) {
            printf("Title: %s\n",reviews[i].title);
            printf("Platform: %s\n",reviews[i].platform);
            printf("Score: %d\n",reviews[i].score);
            printf("Release Year: %d\n",reviews[i].release_year);
            printf("\n");
            c++;
        }
        if(c==5) break;
    }
}


int main() {
    
    FILE *f= fopen("/Users/shivangisareen/Desktop/Year3/DSA_Lab/assignment2/assignment2/ign.csv","r");
    int i=0;
    
    if(!f) {
        printf("UNABLE TO OPEN FILE  \n");
    }
    
    fetch_record(f, &field);
    
    while(!feof(f)) {
        fetch_record(f, &field);
        reviews[i]=field;
        i++;
    }
    
    //i=18625
    i--;  //i=18624
    
    quickSort(reviews, 0, 18624);
 
    printf("Top 5 Games of Each Year:\n\n\n");
    
    for(int i=1996;i<=2016;i++) {
        printf("YEAR %d\n\n",i);
        get_year(i);
        printf("\n\n");
    }
    
    fclose(f);
}

*/
