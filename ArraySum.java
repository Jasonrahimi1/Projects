
public class ArraySum {

	int sumOfArray(Integer[] a,int index) {
		int Total;
		if (index == 0) {
			Total = a[index];
		}
		else {
			Total = a[index] + sumOfArray(a,index - 1);
			System.out.println(Total);
		}
		return Total;
	}
}
