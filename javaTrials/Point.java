class Point {

	int x;
        int y;

	Point(int x, int y){
	     x = x;
	     y = y;
	}

	public static void main(String args[])
	{
	   final Point origin = new Point(0,0);
	   System.out.println("Origin (final): (" + origin.x + "," + origin.y + ")");
	   //changing origin
	   origin.x = -1;
	   origin.y = -1;
	   System.out.println("Origin (changed): (" + origin.x + "," + origin.y + ")");
	}
}
