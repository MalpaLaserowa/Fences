class TextPlot
!!!194181.cpp!!!	prepareTextScreen(in rows : uint, in cols : uint) : void
    m_text_screen_rows = rows * 2 + 1;
    m_text_screen_cols = cols * 2 + 1;

    TextScreen.resize(m_text_screen_rows, m_text_screen_cols);
    clearTextScreen();
!!!209029.cpp!!!	clearTextScreen() : void
    for(unsigned int row = 0; row < m_text_screen_rows; row++)
    {
        for(unsigned int col = 0; col < m_text_screen_cols; col++)
        {
            TextScreen[row][col].content = ' ';
        }
    }
!!!151301.cpp!!!	printNumbers(in fpacket : IFenceDrawPacket) : void
    unsigned int board_rows, board_colls;

    fpacket.getNumberBoardSize(board_rows, board_colls);

    for(unsigned int row = 0; row < board_rows; row++)
    {
        for(unsigned int coll = 0; coll < board_colls; coll++)
            TextScreen[2 * row + 1][2 * coll + 1].content = fpacket.getFenceNumberXY(row, coll);
    }
!!!151429.cpp!!!	printFence(in fpacket : IFenceDrawPacket) : void

    Utils::Point2D scaled_point;
    Utils::Point2D prevPoint = fpacket.getFencePoint(0); // Tady by bylo lepsi vrace ukazatel na point...

    unsigned int pointCount = fpacket.getFencePointCount();
    for(unsigned int pointIndex = 1; pointIndex < pointCount; pointIndex++)
    {
        Utils::Point2D currentPoint = fpacket.getFencePoint(pointIndex);
        Utils::Point2D deltaPoint = currentPoint;

        deltaPoint -= prevPoint;

        Q_ASSERT(abs(deltaPoint.x()) <= 1);
        Q_ASSERT(abs(deltaPoint.y()) <= 1);

        char line = ' ';
        if(deltaPoint.x())   // Horizontal line
            line = '_';
        else      // Vertical line
            line = '|';

        scaled_point = scalePoint(currentPoint, 2.0);
        scaled_point += deltaPoint;
        TextScreen[scaled_point.x()][scaled_point.y()].content = line;

        prevPoint = currentPoint;
    }

    /****/
            /*get point

            loop
            get point
            urci smer
            scale 2;
            nacpi do pole*/
                   //
!!!194309.cpp!!!	TextPlot(in rows : uint, in cols : uint)
   prepareTextScreen(rows, cols);
!!!224133.cpp!!!	scalePoint(in point : Point2D, in scale_factor : double) : Point2D
    Utils::Point2D scaled(point);

    scaled *= scale_factor;
    return scaled;
