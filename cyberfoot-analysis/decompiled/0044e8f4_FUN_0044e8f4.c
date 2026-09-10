// Address: 0044e8f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0044e8f4(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_30 = param_2;
    if (*(char *)(*(int *)(param_1 + 4) + 0x244) == '\0') {
      local_34 = 4;
      local_2c = 0;
      uVar3 = FUN_0044e8e8(param_1);
      iVar4 = FUN_00432c28(uVar3,&local_34);
      if (iVar4 != 0) {
        uVar2 = local_14;
      }
    }
    else {
      FUN_004032a8(&local_34,0x28,0);
      local_34 = 0;
      local_2c = 0;
      uVar2 = FUN_00450898(*(undefined4 *)(param_1 + 4),&local_34);
    }
  }
  return uVar2;
}

