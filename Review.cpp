#include "Review.h"
#include <cstring>
#include <iostream>

Review::Review(){
  reviewId=0;
  strcpy(reviewDesc,"");
}

void Review::createReview(int id, char desc[]){
  reviewId=id;
  strcpy(reviewDesc,desc);
}

Review::~Review(){
  
}