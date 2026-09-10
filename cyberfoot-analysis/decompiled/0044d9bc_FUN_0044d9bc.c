// Address: 0044d9bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0044d9bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = FUN_0041ea50(param_1);
    FUN_0044dba8(*(undefined4 *)(param_1 + 4));
    uVar2 = FUN_0046cae0();
    uVar1 = FUN_00432da8(uVar2,uVar1);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x24);
}

