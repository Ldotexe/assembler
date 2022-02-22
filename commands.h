DEFCMD("END", 0, code)

DEFCMD("PUSH", 1, {
      stack_push(&stack, code[ip+1])
      })

DEFCMD("POP", 2, {
       stack_pop(&stack);
       })


