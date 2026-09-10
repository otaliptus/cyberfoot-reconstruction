// Address: 0048ddc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048ddc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x580);
  puVar3 = (undefined1 *)(iVar1 + 0x100);
  *(undefined1 **)(param_1 + 0x144) = puVar3;
  FUN_0048aaf4();
  iVar2 = 0;
  do {
    *puVar3 = (char)iVar2;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x100);
  iVar2 = 0x80;
  puVar3 = (undefined1 *)(iVar1 + 0x200);
  do {
    *puVar3 = 0xff;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x200);
  FUN_0048aaf4();
  FUN_0048ab0c();
  return;
}

