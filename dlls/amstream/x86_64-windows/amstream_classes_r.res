        ��  ��                  c  d   W I N E _ R E G I S T R Y   A M S T R E A M _ C L A S S E S _ R _ R E S                     HKCR
{
    NoRemove CLSID
    {
        '{49C47CE0-9BA4-11D0-8212-00C04FC32C45}' = s 'SFilter Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{49C47CE4-9BA4-11D0-8212-00C04FC32C45}' = s 'Stream Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{8496E040-AF4C-11D0-8212-00C04FC32C45}' = s 'AuStream Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{49C47CE5-9BA4-11D0-8212-00C04FC32C45}' = s 'MMStream Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
        '{F2468580-AF8A-11D0-8212-00C04FC32C45}' = s 'AuStream Class'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
}
 