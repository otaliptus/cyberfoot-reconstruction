// Address: 005124d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_005124d0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((((((char)param_1[0xaf] != '\x01') || ((*(byte *)(param_1 + 0x9c) & 0x40) != 0)) &&
       ((char)param_1[0xb8] == '\0')) &&
      (iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2),
      (*(byte *)(iVar3 + 0x7c) & 0x20) == 0)) &&
     ((cVar1 = FUN_00403c80(param_1), cVar1 != '\0' || ((*(byte *)(param_1 + 0x9c) & 0x20) == 0))))
  {
    if ((*(byte *)((int)param_1 + 0x491) & 0x40) == 0) {
      if (((param_2 == param_1[0x128]) &&
          (iVar3 = (**(code **)(*param_1 + 0x138))(), param_3 == iVar3)) &&
         ((param_2 != param_1[0xa0] || (param_3 != param_1[0xa1])))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x130))(param_1,param_3);
      if (cVar1 != '\0') {
        if ((param_2 == param_1[0x128]) &&
           (iVar3 = (**(code **)(*param_1 + 0x138))(), param_3 == iVar3)) {
          if (((*(byte *)((int)param_1 + 0x271) & 1) == 0) &&
             ((param_2 != param_1[0xa0] || (param_3 != param_1[0xa1])))) {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

