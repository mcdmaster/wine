        ��  ��                  �  d   W I N E _ R E G I S T R Y   A C T X P R X Y _ U R L H I S T _ R _ R E S                     HKCR
{
    NoRemove Interface
    {
        '{3C374A42-BAE4-11CF-BF7D-00AA006946EE}' = s 'IEnumSTATURL'
        {
            NumMethods = s 8
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{3C374A41-BAE4-11CF-BF7D-00AA006946EE}' = s 'IUrlHistoryStg'
        {
            NumMethods = s 8
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{AFA0DC11-C313-11D0-831A-00C04FD5AE38}' = s 'IUrlHistoryStg2'
        {
            NumMethods = s 10
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{BC40BEC1-C493-11D0-831B-00C04FD5AE38}' = s 'IUrlHistoryNotify'
        {
            NumMethods = s 5
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
   