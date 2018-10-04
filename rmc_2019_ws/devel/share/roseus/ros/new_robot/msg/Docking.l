;; Auto-generated. Do not edit!


(when (boundp 'new_robot::Docking)
  (if (not (find-package "NEW_ROBOT"))
    (make-package "NEW_ROBOT"))
  (shadow 'Docking (find-package "NEW_ROBOT")))
(unless (find-package "NEW_ROBOT::DOCKING")
  (make-package "NEW_ROBOT::DOCKING"))

(in-package "ROS")
;;//! \htmlinclude Docking.msg.html


(defclass new_robot::Docking
  :super ros::object
  :slots (_beginDocking _moveToBin _arucoX _arucoY ))

(defmethod new_robot::Docking
  (:init
   (&key
    ((:beginDocking __beginDocking) nil)
    ((:moveToBin __moveToBin) nil)
    ((:arucoX __arucoX) 0.0)
    ((:arucoY __arucoY) 0.0)
    )
   (send-super :init)
   (setq _beginDocking __beginDocking)
   (setq _moveToBin __moveToBin)
   (setq _arucoX (float __arucoX))
   (setq _arucoY (float __arucoY))
   self)
  (:beginDocking
   (&optional __beginDocking)
   (if __beginDocking (setq _beginDocking __beginDocking)) _beginDocking)
  (:moveToBin
   (&optional __moveToBin)
   (if __moveToBin (setq _moveToBin __moveToBin)) _moveToBin)
  (:arucoX
   (&optional __arucoX)
   (if __arucoX (setq _arucoX __arucoX)) _arucoX)
  (:arucoY
   (&optional __arucoY)
   (if __arucoY (setq _arucoY __arucoY)) _arucoY)
  (:serialization-length
   ()
   (+
    ;; bool _beginDocking
    1
    ;; bool _moveToBin
    1
    ;; float64 _arucoX
    8
    ;; float64 _arucoY
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _beginDocking
       (if _beginDocking (write-byte -1 s) (write-byte 0 s))
     ;; bool _moveToBin
       (if _moveToBin (write-byte -1 s) (write-byte 0 s))
     ;; float64 _arucoX
       (sys::poke _arucoX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _arucoY
       (sys::poke _arucoY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _beginDocking
     (setq _beginDocking (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _moveToBin
     (setq _moveToBin (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _arucoX
     (setq _arucoX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _arucoY
     (setq _arucoY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get new_robot::Docking :md5sum-) "b6c8776d857a12b67acf562c20bdc3a5")
(setf (get new_robot::Docking :datatype-) "new_robot/Docking")
(setf (get new_robot::Docking :definition-)
      "bool beginDocking
bool moveToBin
float64 arucoX
float64 arucoY

")



(provide :new_robot/Docking "b6c8776d857a12b67acf562c20bdc3a5")


