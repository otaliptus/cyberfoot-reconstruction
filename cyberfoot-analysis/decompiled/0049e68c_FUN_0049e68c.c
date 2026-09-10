// Address: 0049e68c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_0049e68c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0x80) = param_3;
    *(undefined4 *)(iVar1 + 0x90) = param_5;
    *(undefined4 *)(iVar1 + 0x7c) = param_4;
    uVar2 = 0;
  }
  return uVar2;
}

