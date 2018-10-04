; Auto-generated. Do not edit!


(cl:in-package new_robot-msg)


;//! \htmlinclude Docking.msg.html

(cl:defclass <Docking> (roslisp-msg-protocol:ros-message)
  ((beginDocking
    :reader beginDocking
    :initarg :beginDocking
    :type cl:boolean
    :initform cl:nil)
   (moveToBin
    :reader moveToBin
    :initarg :moveToBin
    :type cl:boolean
    :initform cl:nil)
   (arucoX
    :reader arucoX
    :initarg :arucoX
    :type cl:float
    :initform 0.0)
   (arucoY
    :reader arucoY
    :initarg :arucoY
    :type cl:float
    :initform 0.0))
)

(cl:defclass Docking (<Docking>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Docking>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Docking)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name new_robot-msg:<Docking> is deprecated: use new_robot-msg:Docking instead.")))

(cl:ensure-generic-function 'beginDocking-val :lambda-list '(m))
(cl:defmethod beginDocking-val ((m <Docking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader new_robot-msg:beginDocking-val is deprecated.  Use new_robot-msg:beginDocking instead.")
  (beginDocking m))

(cl:ensure-generic-function 'moveToBin-val :lambda-list '(m))
(cl:defmethod moveToBin-val ((m <Docking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader new_robot-msg:moveToBin-val is deprecated.  Use new_robot-msg:moveToBin instead.")
  (moveToBin m))

(cl:ensure-generic-function 'arucoX-val :lambda-list '(m))
(cl:defmethod arucoX-val ((m <Docking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader new_robot-msg:arucoX-val is deprecated.  Use new_robot-msg:arucoX instead.")
  (arucoX m))

(cl:ensure-generic-function 'arucoY-val :lambda-list '(m))
(cl:defmethod arucoY-val ((m <Docking>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader new_robot-msg:arucoY-val is deprecated.  Use new_robot-msg:arucoY instead.")
  (arucoY m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Docking>) ostream)
  "Serializes a message object of type '<Docking>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'beginDocking) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'moveToBin) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'arucoX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'arucoY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Docking>) istream)
  "Deserializes a message object of type '<Docking>"
    (cl:setf (cl:slot-value msg 'beginDocking) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'moveToBin) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'arucoX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'arucoY) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Docking>)))
  "Returns string type for a message object of type '<Docking>"
  "new_robot/Docking")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Docking)))
  "Returns string type for a message object of type 'Docking"
  "new_robot/Docking")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Docking>)))
  "Returns md5sum for a message object of type '<Docking>"
  "b6c8776d857a12b67acf562c20bdc3a5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Docking)))
  "Returns md5sum for a message object of type 'Docking"
  "b6c8776d857a12b67acf562c20bdc3a5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Docking>)))
  "Returns full string definition for message of type '<Docking>"
  (cl:format cl:nil "bool beginDocking~%bool moveToBin~%float64 arucoX~%float64 arucoY~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Docking)))
  "Returns full string definition for message of type 'Docking"
  (cl:format cl:nil "bool beginDocking~%bool moveToBin~%float64 arucoX~%float64 arucoY~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Docking>))
  (cl:+ 0
     1
     1
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Docking>))
  "Converts a ROS message object to a list"
  (cl:list 'Docking
    (cl:cons ':beginDocking (beginDocking msg))
    (cl:cons ':moveToBin (moveToBin msg))
    (cl:cons ':arucoX (arucoX msg))
    (cl:cons ':arucoY (arucoY msg))
))
