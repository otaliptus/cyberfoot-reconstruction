// Address: 00497590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497590(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xac);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = FUN_00497558;
  puVar2 = puVar1 + 8;
  puVar1[1] = FUN_004970bc;
  puVar1[2] = FUN_004973cc;
  puVar1[7] = FUN_00496e70;
  puVar1[0x18] = 0;
  iVar3 = 0;
  do {
    *puVar2 = FUN_00496e70;
    puVar2[0x11] = 0;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x10);
  puVar1[8] = FUN_00496a08;
  puVar1[0x16] = FUN_00496a08;
  FUN_00497558(param_1);
  return;
}

