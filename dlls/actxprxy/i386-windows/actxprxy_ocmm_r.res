        ��  ��                  (  \   W I N E _ R E G I S T R Y   A C T X P R X Y _ O C M M _ R _ R E S                   HKCR
{
    NoRemove Interface
    {
        '{3050F361-98B5-11CF-BB82-00AA00BDCE0B}' = s 'ITimerSink'
        {
            NumMethods = s 4
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{3050F360-98B5-11CF-BB82-00AA00BDCE0B}' = s 'ITimer'
        {
            NumMethods = s 7
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{3050F35F-98B5-11CF-BB82-00AA00BDCE0B}' = s 'ITimerService'
        {
            NumMethods = s 6
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
