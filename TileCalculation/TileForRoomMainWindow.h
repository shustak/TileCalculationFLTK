#include <FL/Fl_Window.H>
#include <FL/Fl_Menu.H>



class TileForRoomMainWindow : public Fl_Window {
public:
	TileForRoomMainWindow();

private:
    void horizontalButtonClicked();
    void verticalButtonClicked();
    //Input Room Box
    void roomW1LengthBox();
    void roomW2LengthBox();
    void roomWidthBox();
    //Input Tile Box
    void tileLengthBox();
    void tileWidthBox();
    void tileSeamBox();
    void tileCostBox();
    //Output Box
    void roomSquareOutbox();
    void tileAmountOutbox();
    void totalTileCostOutbox();

    void about();

private:
    void createToolBox();
    void createActions();
    void createMenus();
    void createToolbars();

    //RoomScene *scene;

    Fl_Menu *fileMenu;
    Fl_Menu *itemMenu;
    Fl_Menu* aboutMenu;
};