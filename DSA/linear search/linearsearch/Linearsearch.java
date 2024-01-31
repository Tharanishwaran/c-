package linearsearch;

public class Linearsearch{

public static void main(String[] args){


 int [] numbers = {4,6,8,9,0};

 int target = 8;

 int ans = linearsearchfun(numbers, target);

 int ans2 = linearsearchfun2(numbers, target);
 System.out.println(ans);
  System.out.println(ans2);


}

// search in the array: return the index if item found
// otherwise if item not found return -1

static int linearsearchfun(int[] arr,int target) {

  if (arr.length== 0 ){
    
    return -1;

  }

//   run a for loop
for(int index = 0;index < arr.length; index++){

    //  check for element att every index if it is = target

    int element = arr[index];
    
    if(element == target) {

        return index;
    }

 

}


//  this line will execute if none of the return 

// hence the target not found

return Integer.MAX_VALUE;

}


// search the target and return a element
static int linearsearchfun2(int[] arr,int target) {

  if (arr.length== 0 ){
    
    return -1;

  }

//   run a for loop
for(int index = 0;index < arr.length; index++){

    //  check for element att every index if it is = target

    int element = arr[index];
    
    if(element == target) {

        return element;
    }

 

}


//  this line will execute if none of the return 

// hence the target not found

return Integer.MAX_VALUE;

}





// search target and return true 
static boolean linearsearchfun3(int[] arr,int target) {

  if (arr.length== 0 ){
    
    return false;

  }

//   run a for loop
for(int index = 0;index < arr.length; index++){

    //  check for element att every index if it is = target

    int element = arr[index];
    
    if(element == target) {

        return true;
    }

 

}


//  this line will execute if none of the return 

// hence the target not found

return false;



}




}












