/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.5.2 (4.5.2) on Mon Dec  8 15:20:56 2008
 */

#include "sipAPIpy_sems_lib.h"
#include "sippy_sems_libAmSipDialog.h"

#include "sippy_sems_libstring.h"
#include "sippy_sems_libAmSipDialog.h"
#include "sippy_sems_libAmSipRequest.h"
#include "sippy_sems_libAmSipReply.h"



extern "C" {static PyObject *meth_AmSipDialog_getRoute(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_getRoute(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_getRoute()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            string *sipRes;

            sipRes = new string(sipCpp->getRoute());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_string,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_getRoute);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_setRoute(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_setRoute(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_setRoute()\n");

    int sipArgsParsed = 0;

    {
        const string * a0;
        int a0State = 0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipMappedType_string,&a0,&a0State))
        {
            sipCpp->setRoute(*a0);

            sipReleaseMappedType(const_cast<string *>(a0),sipMappedType_string,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_setRoute);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_getUACTransPending(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_getUACTransPending(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_getUACTransPending()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->getUACTransPending();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_getUACTransPending);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_getStatus(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_getStatus(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_getStatus()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getStatus();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_getStatus);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_getContactHdr(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_getContactHdr(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_getContactHdr()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            string *sipRes;

            sipRes = new string(sipCpp->getContactHdr());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_string,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_getContactHdr);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_updateStatus(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_updateStatus(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_updateStatus()\n");

    int sipArgsParsed = 0;

    {
        const AmSipRequest * a0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipClass_AmSipRequest,&a0))
        {
            sipCpp->updateStatus(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const AmSipReply * a0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipClass_AmSipReply,&a0))
        {
            sipCpp->updateStatus(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_updateStatus);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_reply(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_reply(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_reply()\n");

    int sipArgsParsed = 0;

    {
        const AmSipRequest * a0;
        unsigned a1;
        const string * a2;
        int a2State = 0;
        const string * a3;
        int a3State = 0;
        const string * a4;
        int a4State = 0;
        const string * a5;
        int a5State = 0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAuM1M1M1M1",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipClass_AmSipRequest,&a0,&a1,sipMappedType_string,&a2,&a2State,sipMappedType_string,&a3,&a3State,sipMappedType_string,&a4,&a4State,sipMappedType_string,&a5,&a5State))
        {
            int sipRes;

            sipRes = sipCpp->reply(*a0,a1,*a2,*a3,*a4,*a5);

            sipReleaseMappedType(const_cast<string *>(a2),sipMappedType_string,a2State);
            sipReleaseMappedType(const_cast<string *>(a3),sipMappedType_string,a3State);
            sipReleaseMappedType(const_cast<string *>(a4),sipMappedType_string,a4State);
            sipReleaseMappedType(const_cast<string *>(a5),sipMappedType_string,a5State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_reply);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_sendRequest(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_sendRequest(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_sendRequest()\n");

    int sipArgsParsed = 0;

    {
        const string * a0;
        int a0State = 0;
        const string * a1;
        int a1State = 0;
        const string * a2;
        int a2State = 0;
        const string * a3;
        int a3State = 0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1M1M1M1",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipMappedType_string,&a0,&a0State,sipMappedType_string,&a1,&a1State,sipMappedType_string,&a2,&a2State,sipMappedType_string,&a3,&a3State))
        {
            int sipRes;

            sipRes = sipCpp->sendRequest(*a0,*a1,*a2,*a3);

            sipReleaseMappedType(const_cast<string *>(a0),sipMappedType_string,a0State);
            sipReleaseMappedType(const_cast<string *>(a1),sipMappedType_string,a1State);
            sipReleaseMappedType(const_cast<string *>(a2),sipMappedType_string,a2State);
            sipReleaseMappedType(const_cast<string *>(a3),sipMappedType_string,a3State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_sendRequest);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_bye(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_bye(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_bye()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bye();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_bye);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_cancel(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_cancel(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_cancel()\n");

    int sipArgsParsed = 0;

    {
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmSipDialog,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->cancel();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_cancel);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_update(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_update(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_update()\n");

    int sipArgsParsed = 0;

    {
        const string * a0;
        int a0State = 0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipMappedType_string,&a0,&a0State))
        {
            int sipRes;

            sipRes = sipCpp->update(*a0);

            sipReleaseMappedType(const_cast<string *>(a0),sipMappedType_string,a0State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_update);

    return NULL;
}


extern "C" {static PyObject *meth_AmSipDialog_reinvite(PyObject *, PyObject *);}
static PyObject *meth_AmSipDialog_reinvite(PyObject *sipSelf,PyObject *sipArgs)
{
    sipTrace(SIP_TRACE_METHODS,"meth_AmSipDialog_reinvite()\n");

    int sipArgsParsed = 0;

    {
        const string * a0;
        int a0State = 0;
        const string * a1;
        int a1State = 0;
        const string * a2;
        int a2State = 0;
        AmSipDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1M1M1",&sipSelf,sipClass_AmSipDialog,&sipCpp,sipMappedType_string,&a0,&a0State,sipMappedType_string,&a1,&a1State,sipMappedType_string,&a2,&a2State))
        {
            int sipRes;

            sipRes = sipCpp->reinvite(*a0,*a1,*a2);

            sipReleaseMappedType(const_cast<string *>(a0),sipMappedType_string,a0State);
            sipReleaseMappedType(const_cast<string *>(a1),sipMappedType_string,a1State);
            sipReleaseMappedType(const_cast<string *>(a2),sipMappedType_string,a2State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_reinvite);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmSipDialog(void *, sipWrapperType *);}
static void *cast_AmSipDialog(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_AmSipDialog)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmSipDialog(void *, int);}
static void release_AmSipDialog(void *ptr,int)
{
    delete reinterpret_cast<AmSipDialog *>(ptr);
}


extern "C" {static void dealloc_AmSipDialog(sipWrapper *);}
static void dealloc_AmSipDialog(sipWrapper *sipSelf)
{
    sipTrace(SIP_TRACE_DEALLOCS,"dealloc_AmSipDialog()\n");

    if (sipIsPyOwned(sipSelf))
    {
        release_AmSipDialog(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_AmSipDialog(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmSipDialog(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    AmSipDialog *sipCpp = 0;

    sipTrace(SIP_TRACE_INITS,"init_AmSipDialog()\n");

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new AmSipDialog();
        }
    }

    if (!sipCpp)
    {
        const AmSipDialog * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmSipDialog,&a0))
        {
            sipCpp = new AmSipDialog(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static PyObject *var_AmSipDialog_cseq(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_cseq(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->cseq;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_py_sems_lib_AmSipDialog,sipNm_py_sems_lib_cseq);
        return NULL;
    }

    sipCpp->cseq = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_next_hop(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_next_hop(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->next_hop;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->next_hop = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_local_party(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_local_party(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->local_party;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->local_party = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_remote_party(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_remote_party(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->remote_party;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->remote_party = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_local_tag(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_local_tag(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->local_tag;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->local_tag = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_remote_tag(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_remote_tag(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->remote_tag;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->remote_tag = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_callid(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_callid(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->callid;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->callid = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_contact_uri(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_contact_uri(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->contact_uri;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->contact_uri = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_remote_uri(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_remote_uri(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->remote_uri;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->remote_uri = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_local_uri(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_local_uri(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->local_uri;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->local_uri = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_sip_port(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_sip_port(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->sip_port;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->sip_port = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_sip_ip(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_sip_ip(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->sip_ip;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->sip_ip = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_domain(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_domain(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->domain;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->domain = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_AmSipDialog_user(PyObject *, PyObject *);}
static PyObject *var_AmSipDialog_user(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   string *sipVal;
    AmSipDialog *sipCpp = reinterpret_cast<AmSipDialog *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AmSipDialog));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->user;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_string,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<string *>(sipForceConvertToMappedType(sipPy,sipMappedType_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->user = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_string,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_AmSipDialog[] = {
    {sipNm_py_sems_lib_cseq, var_AmSipDialog_cseq, 0, NULL},
    {sipNm_py_sems_lib_next_hop, var_AmSipDialog_next_hop, 0, NULL},
    {sipNm_py_sems_lib_local_party, var_AmSipDialog_local_party, 0, NULL},
    {sipNm_py_sems_lib_remote_party, var_AmSipDialog_remote_party, 0, NULL},
    {sipNm_py_sems_lib_local_tag, var_AmSipDialog_local_tag, 0, NULL},
    {sipNm_py_sems_lib_remote_tag, var_AmSipDialog_remote_tag, 0, NULL},
    {sipNm_py_sems_lib_callid, var_AmSipDialog_callid, 0, NULL},
    {sipNm_py_sems_lib_contact_uri, var_AmSipDialog_contact_uri, 0, NULL},
    {sipNm_py_sems_lib_remote_uri, var_AmSipDialog_remote_uri, 0, NULL},
    {sipNm_py_sems_lib_local_uri, var_AmSipDialog_local_uri, 0, NULL},
    {sipNm_py_sems_lib_sip_port, var_AmSipDialog_sip_port, 0, NULL},
    {sipNm_py_sems_lib_sip_ip, var_AmSipDialog_sip_ip, 0, NULL},
    {sipNm_py_sems_lib_domain, var_AmSipDialog_domain, 0, NULL},
    {sipNm_py_sems_lib_user, var_AmSipDialog_user, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_AmSipDialog(PyObject *, int *);}
static void *forceConvertTo_AmSipDialog(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmSipDialog))
        return sipConvertToCpp(valobj,sipClass_AmSipDialog,iserrp);

    sipBadClass(sipNm_py_sems_lib_AmSipDialog);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_AmSipDialog[] = {
    {sipNm_py_sems_lib_bye, meth_AmSipDialog_bye, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_cancel, meth_AmSipDialog_cancel, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_getContactHdr, meth_AmSipDialog_getContactHdr, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_getRoute, meth_AmSipDialog_getRoute, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_getStatus, meth_AmSipDialog_getStatus, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_getUACTransPending, meth_AmSipDialog_getUACTransPending, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_reinvite, meth_AmSipDialog_reinvite, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_reply, meth_AmSipDialog_reply, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_sendRequest, meth_AmSipDialog_sendRequest, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_setRoute, meth_AmSipDialog_setRoute, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_update, meth_AmSipDialog_update, METH_VARARGS, NULL},
    {sipNm_py_sems_lib_updateStatus, meth_AmSipDialog_updateStatus, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_AmSipDialog[] = {
    {sipNm_py_sems_lib_Connected, AmSipDialog::Connected, 2},
    {sipNm_py_sems_lib_Disconnected, AmSipDialog::Disconnected, 2},
    {sipNm_py_sems_lib_Disconnecting, AmSipDialog::Disconnecting, 2},
    {sipNm_py_sems_lib_Pending, AmSipDialog::Pending, 2},
};


sipTypeDef sipType_py_sems_lib_AmSipDialog = {
    0,
    0,
    "py_sems_lib.AmSipDialog",
    0,
    {0, 0, 1},
    0,
    0,
    12, methods_AmSipDialog,
    4, enummembers_AmSipDialog,
    variables_AmSipDialog,
    init_AmSipDialog,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmSipDialog,
    cast_AmSipDialog,
    release_AmSipDialog,
    forceConvertTo_AmSipDialog,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};