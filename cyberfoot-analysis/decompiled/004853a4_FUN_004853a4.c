// Address: 004853a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004853a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (param_2 != -1) {
    for (puVar2 = *(undefined4 **)(param_1 + 0x5c);
        (puVar2 != (undefined4 *)0x0 && (param_2 != puVar2[1])); puVar2 = (undefined4 *)*puVar2) {
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x60);
    }
    else {
      uVar1 = puVar2[2];
    }
  }
  return uVar1;
}

