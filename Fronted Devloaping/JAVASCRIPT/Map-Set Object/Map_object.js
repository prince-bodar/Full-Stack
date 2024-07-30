/* javascript  Map object */

{
    // let object = {firstname:"prince" , lastname:"bodar" , id:6}
    // console.log(object);

    // object.Gender = "Female"
    // console.log(object);
    
    // object.Gender = "Male" ;
    // console.log(object);

    // let data1 = object.Gender
    // console.log(data1);
    
    // console.log(object.lastname);
}

// let Mapobject = new Map([['firstname','bodar'],['lastname','prince'],['age','18']]);
// console.log(Mapobject);
{
    let Mapobject = new Map();
    console.log(Mapobject);

   /*  set method  */

   Mapobject.set("firstname" , "bodar" );
   Mapobject.set("lastname"  , "prince");
   Mapobject.set("Age" , 18)
   Mapobject.set("ID" , 6)

   console.log(Mapobject);

     /*  size method  */
   
   //  console.log(Mapobject.size);

    /* delete method */

    // let mapdata1 = Mapobject.delete("ID")   
    // console.log(Mapobject);

    /* has method */

  //   let mapdata2 = Mapobject.has("")
  //  console.log(mapdata2);

   /* key method */

  //  mapdata3 = Mapobject.keys();
   
  //  console.log(mapdata3);
  //  console.log(mapdata3.next().value);
  //  console.log(mapdata3.next().value);
  //  console.log(mapdata3.next().value);
  //  console.log(mapdata3.next().value);

  /* value method */

  // mapdata4 = Mapobject.values()

  // console.log(mapdata4);
  // console.log(mapdata4.next().value);
  // console.log(mapdata4.next().value);
  // console.log(mapdata4.next().value);

  /* ForEach method*/

  // let MapObject = new Map([['option1','1'],['option2','2'],['option3','3']
  //                      ,['option4',{}]]).forEach(printdata) 

  //  function printdata(key , value){
  //     console.log(`${key} = ${value}`);
  //  }        
  
  /* entries method */
  
  // let MapObject = new Map([['option1','1'],['option2','2'],['option3','3'],['option4',4]])

  // let mapdata5 = MapObject.entries()
  // console.log(mapdata5);  
  // console.log(mapdata5.next().value);
  // console.log(mapdata5.next().value);
  // console.log(mapdata5.next().value);
  // console.log(mapdata5.next().value);

}
