        ��  ��                  g  X   W I N E _ R E G I S T R Y   A T L _ C L A S S E S _ R _ R E S                   HKCR
{
    NoRemove CLSID
    {
        '{44EC053A-400F-11D0-9DCD-00A0C90391D3}' = s 'Registrar Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
            ProgId = s 'ATL.Registrar'
        }
    }
    'ATL.Registrar' = s 'Registrar Class'
    {
        CLSID = s '{44EC053A-400F-11D0-9DCD-00A0C90391D3}'
    }
}
 