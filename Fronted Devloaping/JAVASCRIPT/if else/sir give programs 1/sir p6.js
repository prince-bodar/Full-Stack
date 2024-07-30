{
    let per , total , grade , marks , maths , science , english ;

  maths = 50; 
  science = 87; 
  english = 90;
  total = maths + science + english ;
  per = total / 300 *100;

  console.log(maths);
  console.log(science);
  console.log(english);
  console.log(total);
  console.log(per);

  if(per >= 90){
    console.log("you achive grade A");
  }
  else if(per >=80)
  {
    console.log("you achivegrade B");
  }
  else if(per >=70){
    console.log("you achive grade c");
  }
  else if(per >=65){
    console.log("you achive grade D");
  }
  else{
    console.log("you are fail");
  }
}
