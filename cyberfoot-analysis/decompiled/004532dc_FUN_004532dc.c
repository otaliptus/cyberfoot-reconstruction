// Address: 004532dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004532dc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00467a98(param_1,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x17d) != '\x02') {
    return;
  }
  cVar1 = FUN_00466430(param_1);
  if (cVar1 != '\0') {
    if ((((param_3 < 0) || (iVar2 = FUN_00465c0c(param_1), iVar2 <= param_3)) || (param_4 < 0)) ||
       (iVar2 = FUN_00465c50(param_1), iVar2 < param_4)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_00453af8(param_1,uVar3);
    return;
  }
  return;
}

