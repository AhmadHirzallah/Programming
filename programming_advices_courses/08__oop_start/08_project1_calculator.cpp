#include <iostream>
#include <cctype>

using namespace std;

enum    e_operation
{
    clearing_e,
    addition_e,
    subtraction_e,
    multiplication_e,
    division_e,
    cancelling_last_operation_e
};

class   cls_calculator
{
    private:
        float   _last_nbr;
        float   _result;
        float   _prev_result;
        e_operation _last_operation_e;

        bool    ft_check_is_zero(float entered_nbr)
        {
            return (entered_nbr == 0);
        }

        string  ft_get_operation(e_operation entered_operation_e)
        {
            const  char *str_operations[] = 
            {
                "Clearing",
                "Addition",
                "Subtraction",
                "Multiplication",
                "Division",
                "Cancelling Last Operation"
            };
            return (str_operations[entered_operation_e]);
        }

    public:

        void    ft_add_nbr(float nbr)
        {
            _last_nbr = nbr;
            _last_operation_e = e_operation::addition_e;
            _prev_result = _result;
            _result += nbr;
        }

        void    ft_subtract_nbr(float nbr)
        {
            _last_nbr = nbr;
            _prev_result = _result;
            _last_operation_e = subtraction_e;
            _result -= nbr;
        }

        void    ft_multiply_nbr(float nbr)
        {
            _last_nbr = nbr;
            _prev_result = _result;
            _last_operation_e = multiplication_e;
            _result *= nbr;
        }

        void    ft_divide_nbr(float nbr)
        {
            if (ft_check_is_zero(nbr))
            {
                printf("\nUsing 0 in division is forebidden!\n\nWe changed the number into 1\n\n");
                nbr = 1;
            }
            _last_nbr = nbr;
            _prev_result = _result;
            _result /= nbr;
            _last_operation_e = division_e;
        }

        void    ft_clear()
        {
            _result = 0;
            _prev_result = 0;
            _last_nbr = 0;
            _last_operation_e = clearing_e;
        }

        void    ft_cancel_last_operation()
        {
            _result = _prev_result;
            _last_nbr = 0;
            _last_operation_e = cancelling_last_operation_e;
        }

        float   ft_get_result()
        {
            return (_result);
        }

        void    ft_print_results()
        {
            string  operation;

            operation = ft_get_operation(_last_operation_e);
            printf("\nResult after (%s) - with the number (%.2f) is:  (%.2f)\n\n", operation.c_str(), _last_nbr, _result);
        }
};

int main (void)
{
    cls_calculator  ahmad_calculator;

    ahmad_calculator.ft_clear();
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_add_nbr(5);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_add_nbr(22);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_divide_nbr(0);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_divide_nbr(3);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_multiply_nbr(2);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_subtract_nbr(2);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_cancel_last_operation();
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_clear();
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_add_nbr(9999);
    ahmad_calculator.ft_print_results();

    ahmad_calculator.ft_cancel_last_operation();
    ahmad_calculator.ft_print_results();




    printf("\n\n\n\n\n");
    return (0);
}