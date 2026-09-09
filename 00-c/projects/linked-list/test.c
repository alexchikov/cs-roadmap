#include <assert.h>
#include "list.h"

int main(){

    // тесты на пустой список:
    {
        Node* some_list = init_list();
        
        assert(length(some_list) == 0);
        assert(find(some_list, 1) == -1);
        printf("Tests on empty list completed successfully!\n");
    }

    // тесты на insert_at
    {
        Node* some_list = init_list();

        append(&some_list, 1);
        append(&some_list, 2);
        insert_at(&some_list, 3, 67);

        assert(length(some_list) == 2);

        insert_at(&some_list, 0, 5);
        insert_at(&some_list, 3, 4);

        assert(length(some_list) == 4);
        assert(find(some_list, 4) == 3);
        assert(find(some_list, 5) == 0);
        printf("Tests on insert_at completed successfully!\n");
    }

    // тесты на pop:
    {
        Node* some_list = init_list();

        append(&some_list, 1);
        append(&some_list, 2);
        
        assert(pop(&some_list) == 2);
        assert(length(some_list) == 1);
        assert(pop(&some_list) == 1);
        assert(length(some_list) == 0);
        
        pop(&some_list);
        assert(length(some_list) == 0);
        printf("Tests on pop completed successfully!\n");
    }

    // тесты на free_list:
    {
        Node* some_list = init_list();
        
        append(&some_list, 5);
        append(&some_list, 4);
        append(&some_list, 3);

        free_list(&some_list);

        assert(length(some_list) == 0);
        assert(some_list == NULL);

        free_list(&some_list);

        assert(length(some_list) == 0);
        assert(some_list == NULL);
        printf("Tests on free_list completed successfully!\n");
    }

    return 0;
}