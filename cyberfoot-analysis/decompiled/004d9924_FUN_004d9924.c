// Address: 004d9924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined * FUN_004d9924(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  cVar1 = FUN_00403c10(param_1,PTR_PTR_00446d98);
  puVar3 = PTR_PTR_004d8aa4;
  if ((((cVar1 == '\0') &&
       (cVar1 = FUN_00403c10(param_1,PTR_PTR_00448e94), puVar3 = PTR_PTR_004d8ba0, cVar1 == '\0'))
      && (cVar1 = FUN_00403c10(param_1,PTR_PTR_0043cf90), puVar3 = PTR_PTR_004d8ca0, cVar1 == '\0'))
     && (((cVar1 = FUN_00403c10(param_1,PTR_PTR_004481e0), puVar3 = PTR_PTR_004d8d84, cVar1 == '\0'
          && (cVar1 = FUN_00403c10(param_1,PTR_PTR_00459c70), puVar3 = PTR_PTR_004d8e68,
             cVar1 == '\0')) &&
         (cVar1 = FUN_00403c10(param_1,PTR_PTR_00461f94), puVar3 = PTR_PTR_004d902c, cVar1 != '\0'))
        )) {
    puVar3 = PTR_PTR_004d8f48;
  }
  iVar2 = FUN_00403a10(puVar3);
  if (param_2 != iVar2) {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntActnList.pas"
                 ,0x1e3);
  }
  return puVar3;
}

