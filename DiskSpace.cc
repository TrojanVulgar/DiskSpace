<html>
<?global

    int add( int a, int b )
    {
        return a + b;
    }

?>
    <body>

        5 + 7 = <?c out << add( 5, 7 ) ?>

        <ul>
        <?c
            for ( int i = 0; i < 10; i++ )
            {
        ?>
                <li><?c out << i ?></li>
        <?c
            }
        ?>

    </body>
</html>