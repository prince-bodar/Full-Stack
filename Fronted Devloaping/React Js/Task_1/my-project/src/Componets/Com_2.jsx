import React from 'react'
import { Card_1 } from './Com_1'
import { Card_2 } from './Com_1'

const Com_2 = () => {
  return (
    <div class="mt-72">
      <div class="relative mb-10">
           <img class="h-28 w-full" src="https://static.vecteezy.com/system/resources/previews/002/558/887/non_2x/black-and-green-modern-material-header-with-a-hexagonal-mesh-design-banner-with-polygonal-grid-and-blank-space-for-your-logo-abstract-website-design-vector.jpg" alt="" />
           <h1 class="text-6xl text-gray-400 absolute right-10 top-5">Cards</h1> 
      </div>
      <div class="mt-5 flex">
        <div class="bg-gray-300 w-1/3 shadow rounded-lg overflow-hidden m-2">
            <div class="h-1/2 relative text-white text-center  bg-gradient-to-r from-violet-500 to-fuchsia-500">
                <h1 class="text-4xl font-semibold absolute left-28 top-10">Anna Smith</h1>
                 <h2 class="font-semibold text-lg absolute left-32 top-20">Graphic Designer</h2>
            </div>
            <div class="h-1/2 text-center font-medium mt-7">
               Lorem ipsum, dolor sit amet consectetur adipisicing elit. Iusto ullam
               possimus facere, recusandae tempore est commodi repellendus fuga? Autem
               porro veniam illum delectus earum libero nesciunt nemo sapiente impedit 
               saepe!
            </div>
        </div>
        <Card_1
            name="Crisona Rimmy"
            passion="React Devloaper"
            img="https://cdn.pixabay.com/photo/2021/08/04/13/06/software-developer-6521720_640.jpg"/>
         <Card_2 head="Card Title"
                  img="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRdGblMMyDkR7X9ayiTCguObSri0R514XTyew&usqp=CAU"/>
      </div>
    </div>
  )
}

export default Com_2
