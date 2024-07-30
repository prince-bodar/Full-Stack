import { buy_cake } from '../Redux'
import { buy_chocholate } from '../Redux';
import { connect } from 'react-redux';

const CakeContainer = (props) => {
  return (
    <div className='flex flex-wrap items-center justify-center bg-slate-600 h-screen'>
      <div className='mx-10'>
        <h2 className=' text-white text-2xl font-semibold'>Num Of Cake-{props.numOfcake}</h2>
        <button className='text-white bg-gray-900 font-semibold rounded-lg p-2 m-10' onClick={props.buy_cake}>BuyCake</button>
      </div>
      <div className='mx-10'>
        <h2 className='text-white text-2xl font-semibold'>Num Of Chocholate-{props.numOfchocholate}</h2>
        <button className='text-white bg-gray-900 font-semibold rounded-lg p-2 m-10' onClick={props.buy_chocholate}>BuyChocholate</button>
      </div>
    </div>

  )
}


const mapStateToProps = state => {
  return {
    numOfcake: state.numOfcake,
    numOfchocholate: state.numOfchocholate
  }
}

const mapdispatchToProps = dispatch => {
  return {
    buy_cake: () => dispatch(buy_cake()),
    buy_chocholate: () => dispatch(buy_chocholate())
  }
}

export default connect(mapStateToProps, mapdispatchToProps)(CakeContainer)

