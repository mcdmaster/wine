        ��  ��                  �  `   W I N E _ R E G I S T R Y   A C T X P R X Y _ C O M C A T _ R _ R E S                   HKCR
{
    NoRemove Interface
    {
        '{0002E000-0000-0000-C000-000000000046}' = s 'IEnumGUID'
        {
            NumMethods = s 7
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{0002E011-0000-0000-C000-000000000046}' = s 'IEnumCATEGORYINFO'
        {
            NumMethods = s 7
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{0002E013-0000-0000-C000-000000000046}' = s 'ICatInformation'
        {
            NumMethods = s 9
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{0002E012-0000-0000-C000-000000000046}' = s 'ICatRegister'
        {
            NumMethods = s 9
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
    }
    NoRemove CLSID
    {
        '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}' = s 'PSFactoryBuffer'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
}
 