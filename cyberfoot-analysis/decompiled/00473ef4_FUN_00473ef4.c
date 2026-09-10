// Address: 00473ef4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00473ef4(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 != (int *)0x0) {
    cVar1 = FUN_004739fc(param_1);
    if ((cVar1 != '\0') && (-1 < param_2)) {
      iVar2 = FUN_00473f5c(param_1);
      if (param_2 < iVar2) {
        cVar1 = '\x01';
        goto LAB_00473f23;
      }
    }
  }
  cVar1 = '\0';
LAB_00473f23:
  if (cVar1 != '\0') {
    (**(code **)(*param_3 + 0x34))(param_3,*(undefined4 *)(param_1 + 0x30));
    (**(code **)(*param_3 + 0x40))(param_3,*(undefined4 *)(param_1 + 0x34));
    uVar5 = 0;
    uVar4 = 1;
    uVar3 = FUN_00430280(param_3);
    FUN_00474474(param_1,uVar3,0,uVar4,param_2,uVar5);
  }
  return cVar1;
}

