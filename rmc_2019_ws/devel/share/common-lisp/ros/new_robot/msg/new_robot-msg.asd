
(cl:in-package :asdf)

(defsystem "new_robot-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Docking" :depends-on ("_package_Docking"))
    (:file "_package_Docking" :depends-on ("_package"))
  ))