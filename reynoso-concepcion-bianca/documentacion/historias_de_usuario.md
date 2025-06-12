# NOMBRE PROYECTO
Control de inscripciones a talleres virtuales

## Introducción

### Descripción general del sistema
 El sistema de Control de Incripciones a Talleres Virtuales tiene como propósito gestionar de manera funcional la inscripción de usuarios a los talleres disponibles y ofrecidos de una forma virtual y comoda. Facilita y permite ver la disponibilidad de los talleres, realizar modificaciones como cambios o incluso cancelaciones en su inscripcion recibiendo notificaciones- Al mismo tiempo los administradores del sistema podran tener un informe total para poder gestionar facilmente el contenido de los talleres, como horarios, fechas y cupos disponibles. 

### Objetivo General
Crear una plataforma que minimice la dificultad de registro, incripciones, controle y administración para los talleres virtuales, mejorando la experiencia para los usuarios y facilitando el trabajo de los administradores de sistema 

### Objetivos específicos
Autorizar el registro de usuarios para luego dar acceso a la inscripcón a los talleres,

Facilita el acceso a la informacionde los talleres disponibles para la isncripcion

Administar las inscripciones y cancelaciones por parte de los usuarios participantes y administradores del sistema

Permitir a los administradores la creación y gestión de talleres virtuales


## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1
HU-01: Registro de usuario
Descripción:
Como participante, quiero registrarme en la plataforma para poder inscribirme en los talleres virtuales.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir el ingreso de datos como nombre, correo electrónico y contraseña, y enviar un correo de confirmación tras el registro exitoso.

Criterio negativo: Si el correo electrónico ya está registrado, el sistema debe mostrar un mensaje de error y no permitir el registro con ese correo.

HU-02: Inicio de sesión
Descripción:
Como usuario registrado, quiero iniciar sesión en la plataforma para acceder a las funcionalidades de inscripción.

Criterios de aceptación:

Criterio positivo: El sistema debe validar el correo y la contraseña ingresados y redirigir al usuario al panel de usuario tras iniciar sesión correctamente.

Criterio negativo: Si el correo o la contraseña son incorrectos, el sistema debe mostrar un mensaje de error y no permitir el acceso.

HU-03: Recuperación de contraseña
Descripción:
Como usuario registrado, quiero recuperar mi contraseña en caso de olvidarla para poder acceder a la plataforma nuevamente.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir la recuperación de la contraseña a través del correo registrado.

Criterio negativo: Si el correo no está registrado en el sistema, el sistema debe mostrar un mensaje de error y no enviar la recuperación.

HU-04: Validación de datos al registrarse
Descripción:
Como participante, quiero asegurarme de que los datos que ingreso son correctos para no generar problemas en el futuro.

Criterios de aceptación:

Criterio positivo: El sistema debe validar que los campos obligatorios como nombre, correo y contraseña sean completados correctamente.

Criterio negativo: Si alguno de los campos obligatorios está vacío o mal completado, el sistema debe mostrar un mensaje de advertencia y no permitir el registro.

HU-05: Registro de múltiples usuarios
Descripción:
Como administrador, quiero poder registrar varios usuarios al mismo tiempo para facilitar el proceso de incorporación masiva.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir la carga masiva de usuarios mediante un archivo CSV o similar.

Criterio negativo: Si el archivo CSV contiene errores en el formato o datos inválidos, el sistema debe mostrar un mensaje de error y no procesar el registro.

HU-06: Confirmación de registro
 
Descripción:
Como participante, quiero recibir una confirmación por correo electrónico después de registrarme para asegurarme de que mi cuenta fue creada correctamente.

Criterios de aceptación:

Criterio positivo: El sistema debe enviar un correo de confirmación inmediatamente después del registro exitoso.

Criterio negativo: Si el correo no se envía, el sistema debe mostrar un mensaje de error y no finalizar el proceso de registro.

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2
HU-07: Visualización de talleres disponibles
Descripción:
Como participante, quiero ver la lista de talleres disponibles para poder elegir a cuál inscribirme.

Criterios de aceptación:

Criterio positivo: El sistema debe mostrar una lista actualizada de talleres disponibles con los detalles como nombre, fecha, hora y modalidad.

Criterio negativo: Si no hay talleres disponibles, el sistema debe mostrar un mensaje indicando que no hay talleres disponibles para la inscripción en ese momento.

HU-08: Inscripción a un taller
Descripción:
Como participante, quiero inscribirme a un taller específico para garantizar mi cupo en el evento.

Criterios de aceptación:

Criterio positivo: El sistema debe verificar que haya cupos disponibles y confirmar la inscripción con un mensaje visual y un correo de confirmación.

Criterio negativo: Si no hay cupos disponibles, el sistema debe mostrar un mensaje indicando que el taller está lleno y no permitir la inscripción.

HU-09: Filtro de talleres
Descripción:
Como participante, quiero filtrar los talleres por fecha, modalidad y nivel para encontrar el taller que mejor se ajuste a mis necesidades.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir filtrar los talleres según los parámetros seleccionados (fecha, modalidad, nivel).

Criterio negativo: Si no se encuentran resultados para el filtro aplicado, el sistema debe mostrar un mensaje indicando que no se encontraron talleres que coincidan con esos criterios.

HU-10: Inscripción a talleres agotados
Descripción:
Como participante, quiero ver si un taller ya está lleno para evitar intentar inscribirme en uno sin cupo.

Criterios de aceptación:

Criterio positivo: El sistema debe mostrar un mensaje claro de "Cupos agotados" en los talleres que ya no tienen disponibilidad.

Criterio negativo: Si un usuario intenta inscribirse en un taller lleno, el sistema debe rechazar la solicitud y mostrar el mensaje correspondiente.

HU-11: Inscripción con datos incorrectos
Descripción:
Como participante, quiero que el sistema valide los datos ingresados antes de confirmar mi inscripción para evitar errores de registro.

Criterios de aceptación:

Criterio positivo: El sistema debe validar que los datos proporcionados (como nombre y correo) sean correctos antes de proceder con la inscripción.

Criterio negativo: Si los datos son incorrectos, el sistema debe mostrar un mensaje de error indicando qué campo necesita corrección.

HU-12: Inscripción a taller repetido
Descripción:
Como participante, quiero evitar inscribirme varias veces al mismo taller para no generar duplicados en mi registro.

Criterios de aceptación:

Criterio positivo: El sistema debe verificar si ya estoy inscrito en un taller antes de permitir una nueva inscripción.

Criterio negativo: Si intento inscribirme en un taller al que ya estoy registrado, el sistema debe mostrar un mensaje de advertencia y evitar la inscripción repetida.



## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3
HU-13: Administración de talleres
Descripción:
Como administrador, quiero crear, editar o eliminar talleres virtuales para mantener actualizada la oferta de actividades.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir crear, editar y eliminar talleres con información como nombre, fecha, hora, descripción y cupo disponible.

Criterio negativo: Si los datos ingresados son incompletos o incorrectos, el sistema debe mostrar un mensaje de error y no permitir guardar los cambios.

HU-14: Cancelación de inscripción
Descripción:
Como participante, quiero cancelar mi inscripción a un taller para liberar mi cupo y permitir que otra persona se inscriba.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir cancelar la inscripción a un taller dentro del plazo establecido, y reflejar los cambios en el número de cupos disponibles.

Criterio negativo: Si el plazo de cancelación ya ha expirado, el sistema debe mostrar un mensaje indicando que no se puede cancelar la inscripción.

HU-15: Modificación de talleres
Descripción:
Como administrador, quiero modificar los detalles de un taller para ajustar los horarios o cambios en el cupo de participantes.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir modificar la información de los talleres (fecha, hora, cupo, etc.) sin problemas.

Criterio negativo: Si el administrador intenta modificar un taller con datos incorrectos o incompletos, el sistema debe mostrar un mensaje de error y no permitir la modificación.

HU-16: Generación de informes de inscripciones
Descripción:
Como administrador, quiero generar informes sobre las inscripciones a los talleres para obtener un resumen detallado de la actividad de los usuarios.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir generar informes detallados sobre las inscripciones, mostrando el nombre del taller, número de inscritos, y estado de las inscripciones.

Criterio negativo: Si el sistema no tiene datos suficientes o el filtro de búsqueda es incorrecto, debe mostrar un mensaje de error indicando que no se pueden generar informes.

HU-17: Notificación de cambios en los talleres
Descripción:
Como administrador, quiero enviar notificaciones a los participantes cuando haya cambios importantes en los talleres, como cambios en horarios o cancelaciones.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir enviar notificaciones por correo electrónico a los participantes cuando se realicen cambios en los detalles de un taller.

Criterio negativo: Si el correo no se puede enviar debido a un error en el sistema, el administrador debe recibir una alerta indicando el problema.

HU-18: Gestión de permisos de usuario
Descripción:
Como administrador, quiero gestionar los permisos de los usuarios para otorgar acceso a funcionalidades específicas, como la creación de talleres o la gestión de inscripciones.

Criterios de aceptación:

Criterio positivo: El sistema debe permitir asignar permisos a los usuarios, como acceso para crear talleres o gestionar inscripciones, de acuerdo con su rol.

Criterio negativo: Si el administrador intenta asignar permisos a un usuario sin el rol adecuado, el sistema debe mostrar un mensaje de error indicando que no se pueden asignar permisos a ese usuario.