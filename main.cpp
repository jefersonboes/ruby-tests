#include <cstdio>
#include "ruby.h"

int main(int argc, char *argv[])
{
    //ruby_sysinit(&argc, &argv);
    RUBY_INIT_STACK;
    ruby_init();
    ruby_init_loadpath();

    rb_require("test.rb");
    rb_eval_string("main = Main.new");
    //rb_eval_string("main.init");
    rb_eval_string("$val = main.getName");

    VALUE result = rb_gv_get("val");

    printf("ret: %s\n", STR2CSTR(result));

    return 0;
}
