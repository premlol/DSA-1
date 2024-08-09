#include <stdio.h>
#include<string.h>
struct Friends {
    char name[200];
    char pet_name[200];
    long int phone_number;
};
struct Type {
    char type_of_friend[200];
    char name_of_common_friends[200];
    int places_visited_together;
    struct Friends Fri;
};
int main() {
    int n;
    printf("Enter number of friends:");
    scanf("%d",&n);
    struct Type t[n];
    for(int i=0;i<n;i++){
    printf("\nEnter name : ");
    scanf("%s", &t[i].Fri.name);
    printf("\nEnter pet Name : ");
    scanf("%s", t[i].Fri.pet_name);
    printf("\nEnter phone number : ");
    scanf("%ld", &t[i].Fri.phone_number);
    printf("\nEnter Type of friend (School, College or Area friend) : ");
    scanf("%s", t[i].type_of_friend);
    printf("\nEnter name of common friends : ");
    scanf("%s", t[i].name_of_common_friends);
    printf("\nEnter places visited together: ");
    scanf("%d", &t[i].places_visited_together);
    }
   printf("s.no\tName\tpetname\tPhone number\tType of friend\tName of common friends\tNo.of places visited together\n");
   for(int i=0;i<n;i++){
  printf("%d\t%s\t%s\t%ld\t%s\t%s\t%d\n",
               i + 1, t[i].Fri.name, t[i].Fri.pet_name, t[i].Fri.phone_number,
               t[i].type_of_friend, t[i].name_of_common_friends, t[i].places_visited_together);
    }

    return 0;
}
