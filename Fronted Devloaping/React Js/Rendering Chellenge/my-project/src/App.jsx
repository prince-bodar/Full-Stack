import React from 'react'

export const items = (name,isPacked) => {
  return(
    <li className="item">
      {name} {isPacked && '✔'}
    </li>
  )
}

const App = ({name,isPacked}) => {
  return (
    <div>
      <h1>Sally Ride's Packing List</h1>
      <ul>
        <Item 
          isPacked={true} 
          name="Space suit" 
        />
        <Item 
          isPacked={true} 
          name="Helmet with a golden leaf" 
        />
        <Item 
          isPacked={false} 
          name="Photo of Tam" 
        />
      </ul>
    </div>
  )
}

export default App