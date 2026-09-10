// Address: 0049dc50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049dc50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  *(undefined4 **)(param_1 + 0x168) = puVar1;
  *puVar1 = &LAB_0049cff4;
  iVar2 = 0;
  puVar1 = puVar1 + 0xf;
  do {
    *puVar1 = 0;
    puVar1[-4] = 0;
    puVar1[8] = 0;
    puVar1[4] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  return;
}

