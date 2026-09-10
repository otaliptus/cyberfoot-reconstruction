// Address: 00452178
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00452178(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = 0;
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    FUN_004070b8(param_2,param_3,&local_18);
    local_2c = local_18;
    local_28 = local_14;
    uVar2 = FUN_0046cae0(param_1);
    iVar3 = FUN_00432d0c(uVar2,&local_2c);
    if (iVar3 != -1) {
      uVar4 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar3);
    }
  }
  return uVar4;
}

