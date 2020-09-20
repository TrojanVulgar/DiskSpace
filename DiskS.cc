#include <string>

static int _internal_run( TPropertyBag< str::t_string8 > &in,
                          TPropertyBag< str::t_string8 > &out )
{

    out << "<html>\n\n";

    out << "\n\t<b>\n\t\t";

    out << std::basic_string< char >( "Hello" ) + " World" ;

    out << "\n\t</b>\n</html>";

    return 0;
}