using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace InvokeTest
{
    class Program
    {
        [DllImport("dlltest.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Auto)]
        static extern IntPtr goStart(String StrConn, String strSimuationId, String StrJson);

        static void Main(string[] args)
        {
            IntPtr pRet = goStart("StrConn", "strSimuationId", "pStrJson");
            int nRet = pRet.ToInt32();
        }


    }
}
