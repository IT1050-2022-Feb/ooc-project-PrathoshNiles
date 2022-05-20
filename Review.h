#pragma once
class Review{
  private:
    int reviewId;
    char reviewDesc[200];
  public:
    Review();
    void createReview(int id, char desc[]);
    ~Review();
};