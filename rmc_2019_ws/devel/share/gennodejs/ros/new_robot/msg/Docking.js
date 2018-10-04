// Auto-generated. Do not edit!

// (in-package new_robot.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Docking {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.beginDocking = null;
      this.moveToBin = null;
      this.arucoX = null;
      this.arucoY = null;
    }
    else {
      if (initObj.hasOwnProperty('beginDocking')) {
        this.beginDocking = initObj.beginDocking
      }
      else {
        this.beginDocking = false;
      }
      if (initObj.hasOwnProperty('moveToBin')) {
        this.moveToBin = initObj.moveToBin
      }
      else {
        this.moveToBin = false;
      }
      if (initObj.hasOwnProperty('arucoX')) {
        this.arucoX = initObj.arucoX
      }
      else {
        this.arucoX = 0.0;
      }
      if (initObj.hasOwnProperty('arucoY')) {
        this.arucoY = initObj.arucoY
      }
      else {
        this.arucoY = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Docking
    // Serialize message field [beginDocking]
    bufferOffset = _serializer.bool(obj.beginDocking, buffer, bufferOffset);
    // Serialize message field [moveToBin]
    bufferOffset = _serializer.bool(obj.moveToBin, buffer, bufferOffset);
    // Serialize message field [arucoX]
    bufferOffset = _serializer.float64(obj.arucoX, buffer, bufferOffset);
    // Serialize message field [arucoY]
    bufferOffset = _serializer.float64(obj.arucoY, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Docking
    let len;
    let data = new Docking(null);
    // Deserialize message field [beginDocking]
    data.beginDocking = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [moveToBin]
    data.moveToBin = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [arucoX]
    data.arucoX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [arucoY]
    data.arucoY = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 18;
  }

  static datatype() {
    // Returns string type for a message object
    return 'new_robot/Docking';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b6c8776d857a12b67acf562c20bdc3a5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool beginDocking
    bool moveToBin
    float64 arucoX
    float64 arucoY
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Docking(null);
    if (msg.beginDocking !== undefined) {
      resolved.beginDocking = msg.beginDocking;
    }
    else {
      resolved.beginDocking = false
    }

    if (msg.moveToBin !== undefined) {
      resolved.moveToBin = msg.moveToBin;
    }
    else {
      resolved.moveToBin = false
    }

    if (msg.arucoX !== undefined) {
      resolved.arucoX = msg.arucoX;
    }
    else {
      resolved.arucoX = 0.0
    }

    if (msg.arucoY !== undefined) {
      resolved.arucoY = msg.arucoY;
    }
    else {
      resolved.arucoY = 0.0
    }

    return resolved;
    }
};

module.exports = Docking;
