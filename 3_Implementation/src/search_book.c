/**
 * @file search_book.c
 * @author Suresh Kumar
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<inc.h>
/**
 * @brief To search a book by its name
 * 
 * @param l - struct object  
 * @param count - total number of books
 */

void search_book(struct library *l, int count)
{
      char  bookNm[30];
      printf("Enter book name : ");
      scanf("%s", bookNm);
      for (int i = 0; i < count; i++)
      {
        if (strcmp(bookNm, l[i].bookname) == 0)
          printf("%s \t %s \t %d \t %f \t \n", l[i].bookname, l[i].authorname, l[i].pages, l[i].price);
      }


}
