// Address: 005125e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005125e0(int *param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x138))();
    if ((iVar2 == param_1[0x137]) && ((*(byte *)((int)param_1 + 0x491) & 1) != 0)) {
      FUN_0050ebdc(param_1,1);
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x138))();
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        do {
          cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
          if ((cVar1 != '\0') &&
             (cVar1 = (**(code **)(*param_1 + 0xec))(param_1,param_1[0x128],iVar2), cVar1 != '\0'))
          {
            iVar3 = *(int *)param_1[0x135];
            iVar3 = (**(code **)(iVar3 + 0x30))
                              ((int *)param_1[0x135],param_1[0x128],iVar3,1,param_3);
            (**(code **)(*param_1 + 0x20c))
                      (param_1,param_1[0x128],iVar2,*(undefined1 *)(iVar3 + 0x31));
            if (param_1[0x136] <= iVar2) {
              return;
            }
            FUN_004e7b1c(param_1[0x9a],*(int *)(param_1[0x9a] + 0x2c) + -1);
            return;
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x138))();
    iVar2 = iVar2 + 1;
    iVar3 = (**(code **)(*param_1 + 0x11c))();
    if (iVar2 <= iVar3 + -1) {
      iVar3 = ((iVar3 + -1) - iVar2) + 1;
      do {
        cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
        if ((cVar1 != '\0') &&
           (cVar1 = (**(code **)(*param_1 + 0xec))(param_1,param_1[0x128],iVar2), cVar1 != '\0')) {
          iVar3 = *(int *)param_1[0x135];
          iVar3 = (**(code **)(iVar3 + 0x30))((int *)param_1[0x135],param_1[0x128],iVar3,1,param_3);
          (**(code **)(*param_1 + 0x20c))
                    (param_1,param_1[0x128],iVar2,*(undefined1 *)(iVar3 + 0x31));
          iVar3 = FUN_0050dd94(param_1);
          if (iVar2 < iVar3) {
            return;
          }
          FUN_00512eb4(param_1,iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

