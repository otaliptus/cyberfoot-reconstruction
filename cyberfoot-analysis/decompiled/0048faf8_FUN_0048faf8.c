// Address: 0048faf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048faf8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xe8);
  *(undefined4 **)(param_1 + 0x1bc) = puVar1;
  *puVar1 = FUN_0048efac;
  puVar1[1] = FUN_0048f694;
  iVar2 = 0;
  puVar1 = puVar1 + 0xe;
  do {
    *puVar1 = 0;
    puVar1[-4] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  return;
}

