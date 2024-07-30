import React from "react";
import img from "../assets/alice.jpeg";
import img1 from "../assets/top.png";
import img2 from "../assets/facebook-f.svg";
import img3 from "../assets/linkedin.svg";
import img4 from "../assets/twitter.svg";

export const Card_2 = (props) => {
  return (
    <>
      <div class="bg-gray-300 w-1/3 shadow rounded-lg overflow-hidden m-2">
        <img src={props.img} class="object-cover h-52 w-full" alt="" />
        <div class="p-6">
          <span class="block text-slate-600 font-semibold text-lg">
            {props.head}
          </span>
          <h3 class="mt-3 font-300 text-lg pb-4 border-b border-slate-300">
            Lorem ipsum dolor sit amet consectetur adipisicing elit.
            Reprehenderit facere minima numquam id rerum rem totam incidunt
            vero.
          </h3>
          <button
            type="button"
            class="mt-4 focus:outline-none text-white bg-red-700 hover:bg-red-800
            focus:ring-4 focus:ring-red-300 font-medium rounded-lg text-sm px-5 py-2.5 
            me-2 mb-2 dark:bg-red-600 dark:hover:bg-red-700 dark:focus:ring-red-900"
          >
            Botton
          </button>
        </div>
      </div>
    </>
  );
};

export const Card_1 = (props) => {
  return (
    <>
      <div class="bg-gray-300 h-auto w-1/3 shadow rounded-lg overflow-hidden m-2">
        <div>
          <img src={props.img} class="object-cover h-52 w-full" alt="" />
        </div>
        <div className="pb-5">
          <h1 className="font-bold text-2xl mt-5 text-center">{props.name}</h1>
          <h2 className="font-bold text-xl mt-5 text-center text-blue-500">
            {props.passion}
          </h2>
          <p className="p-3 ">
            Lorem ipsum dolor sit amet consectetur adipisicing elit.
            Reprehenderit facere minima numquam id rerum rem totam incidunt
            vero.
          </p>
          <div className="flex justify-center mt-4">
            <img src={img2} alt="" className="size-5 bg-slate-400 mx-3 shadow rounded-lg" />
            <img src={img3} alt="" className="size-5 mx-3" />
            <img src={img4} alt="" className="size-5 mx-3" />
          </div>
        </div>
      </div>
    </>
  );
};

const Com_1 = () => {
  return (
    <>
      <div>
        <div className="relative">
          <img src={img1} alt="" className="h-full w-full" />
          <h1 className="text-5xl font-bold absolute inset-4 text-white">
            Bootstap Imges
          </h1>
        </div>
        <div className="flex sm:flex-warp mt-10">
          <Card_1 name="Alice Mayer" passion="Photographer" img={img} />
          <Card_2 head="Eat Healthy"
                  img="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTW0HWsREKiCULBLrX37mQPyyCGcEvpuOUUaw&usqp=CAU" />
          <Card_1
            name="Billy Cullen"
            passion="Web Devloaper"
            img="https://cdn.pixabay.com/photo/2021/08/04/13/06/software-developer-6521720_640.jpg"/>
        </div>
      </div>
    </>
  );
};

export default Com_1;
