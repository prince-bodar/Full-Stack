import { buy_cake } from '../Redux/Cake/CakeAction'
import { connect } from 'react-redux';
 
const CakeContainer = (props) => {
  return (
    <div className='flex flex-wrap items-center justify-center bg-slate-600 h-screen'>
      <div className='mx-10'>
        <h2 className=' text-white text-2xl font-semibold'>Num Of Cake-{props.numOfcake}</h2>
        <button className='text-white bg-gray-900 font-semibold rounded-lg p-2 m-10' onClick={props.buy_cake}>BuyCake</button>
      </div>
    </div>

  )
}


const mapStateToProps = state => {
  return {
    numOfcake: state.numOfcake
  }
}

const mapdispatchToProps = dispatch => {
  return {
    buy_cake: () => dispatch(buy_cake()),
  }
}

export default connect(mapStateToProps, mapdispatchToProps)(CakeContainer)

