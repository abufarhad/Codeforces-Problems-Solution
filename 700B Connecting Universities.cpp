//#include<bits/stdc++.h>
//#include<stdio.h>
//using namespace std;
//#define ll                  long long
//#define scl(n)              scanf("%lld", &n)
//#define fr(i,n)             for (ll i=0;i<n;i++)
//#define fr1(i,n)            for(ll i=1;i<=n;i++)
//#define pb                  push_back
//#define  N    200005
// ll m,n,i,j,k,ans;
//vector<ll> v[N];
//
//ll b[N];
//void dfs(ll p, ll q)
//{
//   // cout<<b[p]<<" -- "<<2*k-b[p]<<endl;
//     for(auto u:v[p] )if( u!=q) dfs(u, p), b[p]+=b[u];//cout<<u<<" -*- "<<q<<endl,
//
//     //cout<<p<<" "<<b[p]<<" "<<2*k-b[p]<<endl;
//     ans+=min(b[p], 2*k-b[p]);
//}
//
//int main()
//{
//    ll x,y;
//    cin>>n>>k;
//    fr(i,2*k)cin>>m,b[m]=1;
//    fr(i,n-1)
//    {
//        cin>>x>>y;
//        v[x].pb(y);
//        v[y].pb(x);
//    }
//   // cout<<"-----**-----"<<endl;
//    dfs(1,0);
//    cout<<ans<<endl;
//
//}


#include <bits/stdc++.h>

// #include <allegro.h>
 using namespace std;
 BITMAP *buffer;
 BITMAP *board;
 BITMAP *pieces;
 const int total_pieces = 24;
 struct Pieces
 {
   int x,y;
 };
 Pieces piece_coord [total_pieces];
 int board_coord[8][8];
 int x_positions []= {130,180,230,280,330,380,430,480};
 int y_positions []= {80,130,180,230,280,330,380,430};
 int b0 =130;
 int k0 = 80;
 int which_piece=-1;
 int oldarraypos_x=-1;
 int oldarraypos_y=-1;
 int x;
 int y;
 void mirror_board()
 {
   for (int i=0; i<=7; i++)
   {
     int w=0;
     for (int j=0; j<=3;j++)
     {
       board_coord[i][j]= 130+ w;
       w = w+50;
     }
   }
 }
 void setup_board()
 {
 //  board = load_bitmap("checker board.bmp",NULL);
 //  pieces= load_bitmap ("checkers pieces.bmp",NULL);
   draw_sprite(buffer,board,130,80);
   for (int i=0; i<=0;i++)
   {
     for (int j=0; j<=4; j++)
     {
       piece_coord[j].y = y_positions[i];
     }
     for (int k=4; k<=7; k++)
     {
       piece_coord[k].y = y_positions[i+1];
     }
     for (int d=8; d <=11;d++)
     {
       piece_coord[d].y = y_positions[i+2];
     }
   }
   for (int i=0; i<=0; i++)
   {
     int z=80;
     int v=30;
     int c=80;
     for (int j=0; j<=3; j++)
     {
       piece_coord[j].x = z + 100;
       z = z+100;
     }
     for (int j=4; j<=7; j++)
     {
       piece_coord[j].x = v+100;
       v = v+100;
     }
     for (int j=8; j<=11; j++)
     {
       piece_coord[j].x = c+100;
       c = c+100;
     }

   }

   for (int i=0; i<=11; i++)
   {
     masked_blit(pieces,buffer,0,0,piece_coord[i].x,piece_coord[i].y,42,40);

   draw_sprite(screen,buffer,0,0);
 }
 int piece_positionX(int x)
 {
   if (mouse_x>= 130 && mouse_x <= 180)
   {
     x = 0;
   }
   if (mouse_x>= 180 && mouse_x <= 230)
   {
     x = 1;
   }
   if (mouse_x>= 230 && mouse_x <= 280)
   {
     x =2;
   }
   if (mouse_x>= 280 && mouse_x <= 330)
   {
     x = 3;
   }
   if (mouse_x>= 330 && mouse_x <= 380)
   {
     x = 4;
   }
   if (mouse_x>= 380 && mouse_x <= 430)
   {
     x = 5;
   }
   if (mouse_x>= 430 && mouse_x <= 480)
   {
     x = 6;
   }
   if (mouse_x>= 480 && mouse_x <= 530)
   {
     x = 7;
   }
   return x;
 }
 int piece_positionY(int y)
 {
   if (mouse_y >= 80 && mouse_y <= 130)
   {
     y = 0;
   }
   if (mouse_y >= 130 && mouse_y <= 180)
   {
     y = 1;
   }
   if (mouse_y >= 180 && mouse_y <= 230)
   {
     y = 2;
   }
   if (mouse_y >= 230 && mouse_y <= 280)
   {
     y = 3;
   }
   if (mouse_y >= 280 && mouse_y <= 330)
   {
     y = 4;
   }
   if (mouse_y >= 330 && mouse_y <= 380)
   {
     y = 5;
   }
   if (mouse_y >= 380 && mouse_y <= 430)
   {
     y = 6;
   }
   if (mouse_y >= 430 && mouse_y <= 480)
   {
     y = 7;
   }
   return y;
 }
 void eraser ()
 {
   int px = x_positions[oldarraypos_x];
   int py = y_positions[oldarraypos_y];
   blit(board,buffer,oldarraypos_x*50, oldarraypos_y*50,px,py,50,50);
   blit(board,buffer,(mouse_x -130)-5, (mouse_y-80)-5,mouse_x-5,mouse_y-5,50,50);
   //draw_sprite(screen,buffer,0,0);
 }
 void chosen_piece()
 {
   int arraypos_x;
   int arraypos_y;
 //  arraypos_x = (mouse_x/44)-3;
 //  arraypos_y = (mouse_y/40)-2;
   if (mouse_b & 1 && which_piece !=0)
   {

     oldarraypos_x = piece_positionX(oldarraypos_x);
     oldarraypos_y =piece_positionY(oldarraypos_y);

     which_piece = 0;
   }
   if (which_piece==0 )
   {

     x = mouse_x;
     y = mouse_y;
     eraser();
     blit (pieces,buffer,0,0,x,y,42,40);

     arraypos_y = piece_positionY(arraypos_y);
     if(!mouse_b & 1 && arraypos_y== oldarraypos_y+1)
     {
       arraypos_x = piece_positionX(arraypos_x);
       if (arraypos_x== oldarraypos_x+1 || arraypos_x== oldarraypos_x-1)
       {
         x= x_positions[arraypos_x];
         y= y_positions[arraypos_y];
         which_piece=-1;
       }
       else
       {
         x = x_positions[oldarraypos_x];
         y = y_positions[oldarraypos_y];

         which_piece=-1;
       }
     }
     if (!mouse_b & 1 && arraypos_y != oldarraypos_y+1)
     {
       x = x_positions[oldarraypos_x];
       y = y_positions[oldarraypos_y];
       which_piece =-1;
     }

   }
 }

 int main(int argc, char *argv[]) {
       allegro_init();
       install_keyboard();
       install_mouse();
       set_color_depth(16);
       if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,
         640, 480, 0, 0)<0)
       {
         set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
         allegro_message("Failure to init video mode!\n%s\n",
                  allegro_error);
       }
       buffer = create_bitmap(640,480);
       board = load_bitmap ("checkers board.bmp",NULL);
       pieces= load_bitmap ("checkers pieces.bmp",NULL);

       while(!key[KEY_ESC])
       {
         setup_board();
         chosen_piece();
         //blit(board,buffer,oldarraypos_x*50, oldarraypos_y*50,x_positions[oldarraypos_x],y_positions[oldarraypos_y],50,50);
         show_mouse(buffer);
         draw_sprite(screen,buffer,0,0);
       }
       cout<< piece_coord[4].y<<";";
   cout << "Hello world!" << endl;
   return 0;
 }
 END_OF_MAIN();
