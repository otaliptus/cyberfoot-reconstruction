// Address: 00427ee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 * FUN_00427ee8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  puVar1 = DAT_0066c888;
  if (DAT_0066c88c == (undefined1 *)0x0) {
    puVar1 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
    *puVar1 = DAT_0066c888;
    FUN_00402a04(&DAT_00662674,puVar1 + 1,2);
    uVar2 = FUN_00427ee0((int)puVar1 + 5,&LAB_00427ec0);
    *(undefined4 *)((int)puVar1 + 6) = uVar2;
    puVar3 = (undefined1 *)((int)puVar1 + 10);
    do {
      puVar4 = puVar3;
      *puVar4 = 0xe8;
      uVar2 = FUN_00427ee0(puVar4,puVar1 + 1);
      *(undefined4 *)(puVar4 + 1) = uVar2;
      *(undefined1 **)(puVar4 + 5) = DAT_0066c88c;
      puVar3 = puVar4 + 0xd;
      DAT_0066c88c = puVar4;
    } while ((int)(puVar4 + 0xd) - (int)puVar1 < 0xffc);
  }
  DAT_0066c888 = puVar1;
  puVar3 = DAT_0066c88c;
  puVar1 = (undefined4 *)(DAT_0066c88c + 5);
  DAT_0066c88c = (undefined1 *)*(undefined4 *)(DAT_0066c88c + 5);
  *puVar1 = in_stack_00000004;
  *(undefined4 *)(puVar3 + 9) = in_stack_00000008;
  return puVar3;
}

