import React from "react";

export const Card_1 = (props) => {
  return (
    <>
      <div class="bg-gray-300 w-1/3 shadow rounded-lg overflow-hidden m-2">
        <img src={props.img} class="object-cover h-52 w-full" alt="" />
        <div class="p-6">
          <span class="block text-slate-600 font-semibold text-sm">
            {props.name}
          </span>
          <h3 class="mt-3 font-bold text-lg pb-4 border-b border-slate-300">
            <a href="https://play.tailwindcss.com/TGny89rOkl?layout=horizontal">
              Web
            </a>
          </h3>
          <div class="ml-28 mt-11">
          <button
            type="button"
            class="text-white bg-blue-700 hover:bg-blue-800 
            focus:ring-4 focus:ring-blue-300 font-medium rounded-lg text-sm px-5 py-2.5 me-2 mb-2
            dark:bg-blue-600 dark:hover:bg-blue-700 focus:outline-none dark:focus:ring-blue-800"
    
          >
            Go AnyWhere
          </button>
          </div>
        </div>
      </div>
    </>
  );
};

const Com_2 = () => {
  return (
    <>
      <div>
        <div class="relative flex min-h-screen flex-col justify-center overflow-hidden bg-slate-100 py-6 sm:py-12">
          <div class="min-h-28 ">
            <div class="max-w-screen-lg mx-auto py-4">
              <h2 class="font-bold text-center text-6xl text-slate-700 font-display">
                Our Card View
              </h2>
              <p class="text-center mt-4 font-medium text-slate-500">
                Scroll Down For View Card 
              </p>
            </div>
          </div>
        </div>
      </div>
    </>
  );
};

export default Com_2;
