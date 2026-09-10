// Address: 0049ca18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049ca18(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  iVar3 = 0;
  *(undefined4 **)(param_1 + 0x168) = puVar1;
  *puVar1 = &LAB_0049bf88;
  puVar2 = puVar1 + 0x13;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 4);
  puVar1[0x10] = 0;
  return;
}

